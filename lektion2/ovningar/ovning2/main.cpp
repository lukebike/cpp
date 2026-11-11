class Punkt {
    public:
        double x;
        double y;

        Punkt(double startX, double startY) {
                x = startX;
                y = startY;
        }

        Punkt(double startX = 0, double startY = 0): x(startX), y(startY){};
};