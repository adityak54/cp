class Year:
    def _init_(self, year_num, days_in_year, days_in_month):
        self.year_num = year_num
        self.days_in_year = days_in_year
        self.days_in_month = days_in_month
        self.months = []
        self.calculate_months()

    def calculate_months(self):
        leftover_days = 0
        month_num = 1
        while leftover_days < self.days_in_year:
            month_days = min(self.days_in_month, self.days_in_year - leftover_days)
            self.months.append(Month(month_num, month_days))
            leftover_days += month_days
            month_num += 1

class Month:
    def _init_(self, month_num, days):
        self.month_num = month_num
        self.days = days

class Date:
    def _init_(self, year, month, day, day_of_week):
        self.year = year
        self.month = month
        self.day = day
        self.day_of_week = day_of_week

    def _str_(self):
        return f"{self.year:02d}-{self.month:02d}-{self.day:02d} ({self.day_of_week})"

def calculate_leap_year(days_in_year, days_in_month):
    # Logic to determine if a year is a leap year based on leftover days
    pass  # Implement leap year logic here

def generate_calendar(days_in_year, days_in_month, days_in_week):
    year_num = 1
    years = []
    leftover_days = 0

    while True:
        is_leap_year = calculate_leap_year(days_in_year, days_in_month, leftover_days)
        if is_leap_year:
            days_in_year_with_leap = days_in_year + days_in_month
        else:
            days_in_year_with_leap = days_in_year

        year = Year(year_num, days_in_year_with_leap, days_in_month)
        years.append(year)

        leftover_days += days_in_year_with_leap % days_in_month
        year_num += 1

        # Check for calendar validity (e.g., month or day exceeding 2 digits)
        if any(m.days > 99 for year in years for m in year.months):
            return None

    return years

# Example usage
days_in_year = 365
days_in_month = 50
days_in_week = 7

calendar = generate_calendar(days_in_year, days_in_month, days_in_week)