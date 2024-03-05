import unittest
from atm_simple import Cajero

class TestCajero(unittest.TestCase):

    def setUp(self):
        self.cajero = Cajero()

    def test_depositar(self):
        self.cajero.depositar(500)
        self.assertEqual(self.cajero.monto, 5500)
    
    def test_depositar_limite_diario(self):
        self.cajero.depositar(2500)
        self.assertEqual(self.cajero.monto, 7500)
        self.cajero.depositar(1000)
        self.assertEqual(self.cajero.monto, 7500)
    
    def test_retirar(self):
        self.cajero.retirar(2000)
        self.assertEqual(self.cajero.monto, 3000)

    def test_retirar_limite_diario(self):
        self.cajero.retirar(1000)
        self.assertEqual(self.cajero.monto, 4000)
        self.cajero.retirar(2500)
        self.assertEqual(self.cajero.monto, 4000)

    def test_ver(self):
        self.assertEqual(self.cajero.ver(), 5000)

    def test_contraseña(self):
        self.assertTrue(self.cajero.contraseña("5467"))

if __name__ == '__main__':
    unittest.main()
