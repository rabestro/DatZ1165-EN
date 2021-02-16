package com.accenture;

public class Main {
    private static final long MAX_X = (long) Math.sqrt(Long.MAX_VALUE);

    public static void main(String[] args) {
        System.out.println(MAX_X);
        var delta = 0.0;
        for (long i = MAX_X; i > 1; --i) {
            final var param = i * i;
            final var result = Math.sqrt(param);
            delta += Math.abs(result - i);

            var isEqual = i == (long) result;
            if (!isEqual) {
                System.out.printf("%ni = %d, sqrt(%d) = %20f%n", i, param, result);
            }
        }
        System.out.printf("%nDelta = %20.18f%n", delta);
    }
}
