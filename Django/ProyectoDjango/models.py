# This is an auto-generated Django model module.
# You'll have to do the following manually to clean this up:
#   * Rearrange models' order
#   * Make sure each model has one field with primary_key=True
#   * Make sure each ForeignKey and OneToOneField has `on_delete` set to the desired behavior
#   * Remove `` lines if you wish to allow Django to create, modify, and delete the table
# Feel free to rename the models, but don't rename db_table values or field names.
from django.db import models


class AuthGroup(models.Model):
    name = models.CharField(unique=True, max_length=150)

    class Meta:
        
        db_table = 'auth_group'


class AuthGroupPermissions(models.Model):
    id = models.BigAutoField(primary_key=True)
    group = models.ForeignKey(AuthGroup, models.DO_NOTHING)
    permission = models.ForeignKey('AuthPermission', models.DO_NOTHING)

    class Meta:
        
        db_table = 'auth_group_permissions'
        unique_together = (('group', 'permission'),)


class AuthPermission(models.Model):
    name = models.CharField(max_length=255)
    content_type = models.ForeignKey('DjangoContentType', models.DO_NOTHING)
    codename = models.CharField(max_length=100)

    class Meta:
        
        db_table = 'auth_permission'
        unique_together = (('content_type', 'codename'),)


class AuthUser(models.Model):
    password = models.CharField(max_length=128)
    last_login = models.DateTimeField(blank=True, null=True)
    is_superuser = models.IntegerField()
    username = models.CharField(unique=True, max_length=150)
    first_name = models.CharField(max_length=150)
    last_name = models.CharField(max_length=150)
    email = models.CharField(max_length=254)
    is_staff = models.IntegerField()
    is_active = models.IntegerField()
    date_joined = models.DateTimeField()

    class Meta:
        
        db_table = 'auth_user'


class AuthUserGroups(models.Model):
    id = models.BigAutoField(primary_key=True)
    user = models.ForeignKey(AuthUser, models.DO_NOTHING)
    group = models.ForeignKey(AuthGroup, models.DO_NOTHING)

    class Meta:
        
        db_table = 'auth_user_groups'
        unique_together = (('user', 'group'),)


class AuthUserUserPermissions(models.Model):
    id = models.BigAutoField(primary_key=True)
    user = models.ForeignKey(AuthUser, models.DO_NOTHING)
    permission = models.ForeignKey(AuthPermission, models.DO_NOTHING)

    class Meta:
        
        db_table = 'auth_user_user_permissions'
        unique_together = (('user', 'permission'),)


class DjangoAdminLog(models.Model):
    action_time = models.DateTimeField()
    object_id = models.TextField(blank=True, null=True)
    object_repr = models.CharField(max_length=200)
    action_flag = models.PositiveSmallIntegerField()
    change_message = models.TextField()
    content_type = models.ForeignKey('DjangoContentType', models.DO_NOTHING, blank=True, null=True)
    user = models.ForeignKey(AuthUser, models.DO_NOTHING)

    class Meta:
        
        db_table = 'django_admin_log'


class DjangoContentType(models.Model):
    app_label = models.CharField(max_length=100)
    model = models.CharField(max_length=100)

    class Meta:
        
        db_table = 'django_content_type'
        unique_together = (('app_label', 'model'),)


class DjangoMigrations(models.Model):
    id = models.BigAutoField(primary_key=True)
    app = models.CharField(max_length=255)
    name = models.CharField(max_length=255)
    applied = models.DateTimeField()

    class Meta:
        
        db_table = 'django_migrations'


class DjangoSession(models.Model):
    session_key = models.CharField(primary_key=True, max_length=40)
    session_data = models.TextField()
    expire_date = models.DateTimeField()

    class Meta:
        
        db_table = 'django_session'


class F2HControlVen(models.Model):
    convencod = models.AutoField(db_column='ConVenCod', primary_key=True)  # Field name made lowercase.
    convenbolelecabcod = models.ForeignKey('V1TBoletaEleCab', models.DO_NOTHING, db_column='ConVenBolEleCabCod', blank=True, null=True)  # Field name made lowercase.
    convenpagcod = models.ForeignKey('F2TPagos', models.DO_NOTHING, db_column='ConVenPagCod', blank=True, null=True)  # Field name made lowercase.
    convenciacod = models.ForeignKey('F2MCompany', models.DO_NOTHING, db_column='ConVenCiaCod')  # Field name made lowercase.
    convencapfin = models.DecimalField(db_column='ConVenCapFin', max_digits=10, decimal_places=2)  # Field name made lowercase.
    convenestregcod = models.ForeignKey('GzzEstadoRegistro', models.DO_NOTHING, db_column='ConVenEstRegCod')  # Field name made lowercase.

    class Meta:
        db_table = 'f2h_control_ven'


class F2MCompany(models.Model):
    ciacod = models.AutoField(db_column='CiaCod', primary_key=True)  # Field name made lowercase.
    cianom = models.CharField(db_column='CiaNom', max_length=60)  # Field name made lowercase.
    ciaruc = models.BigIntegerField(db_column='CiaRUC')  # Field name made lowercase.
    ciacap = models.DecimalField(db_column='CiaCap', max_digits=10, decimal_places=2)  # Field name made lowercase.
    ciaestregcod = models.ForeignKey('GzzEstadoRegistro', models.DO_NOTHING, db_column='CiaEstRegCod')  # Field name made lowercase.

    class Meta:
        db_table = 'f2m_compañia'


class F2TPagos(models.Model):
    pagcod = models.AutoField(db_column='PagCod', primary_key=True)  # Field name made lowercase.
    pagtrbcod = models.ForeignKey('R1MTrabajador', models.DO_NOTHING, db_column='PagTrbCod')  # Field name made lowercase.
    pagnom = models.CharField(db_column='PagNom', max_length=60)  # Field name made lowercase.
    pagdsc = models.CharField(db_column='PagDsc', max_length=250)  # Field name made lowercase.
    pagpre = models.DecimalField(db_column='PagPre', max_digits=6, decimal_places=2)  # Field name made lowercase.
    pagfecaño = models.IntegerField(db_column='PagFecAño')  # Field name made lowercase.
    pagfecmes = models.IntegerField(db_column='PagFecMes')  # Field name made lowercase.
    pagfecdia = models.IntegerField(db_column='PagFecDia')  # Field name made lowercase.
    paghor = models.IntegerField(db_column='PagHor')  # Field name made lowercase.
    pagmin = models.IntegerField(db_column='PagMin')  # Field name made lowercase.
    pagseg = models.IntegerField(db_column='PagSeg')  # Field name made lowercase.
    pagestregcod = models.ForeignKey('GzzEstadoRegistro', models.DO_NOTHING, db_column='PagEstRegCod')  # Field name made lowercase.

    class Meta:
        db_table = 'f2t_pagos'


class GzzEstadoRegistro(models.Model):
    estregcod = models.CharField(db_column='EstRegCod', primary_key=True, max_length=1)  # Field name made lowercase.
    estregdes = models.CharField(db_column='EstRegDes', max_length=40)  # Field name made lowercase.
    estregestreg = models.ForeignKey('self', models.DO_NOTHING, db_column='EstRegEstReg')  # Field name made lowercase.

    class Meta:
        db_table = 'gzz_estado_registro'


class GzzSino(models.Model):
    tiposncod = models.AutoField(db_column='TipOsnCod', primary_key=True)  # Field name made lowercase.
    tiposndes = models.CharField(db_column='TipOsnDes', max_length=40)  # Field name made lowercase.
    tiposnestreg = models.ForeignKey(GzzEstadoRegistro, models.DO_NOTHING, db_column='TipOsnEstReg')  # Field name made lowercase.

    class Meta:
        db_table = 'gzz_sino'


class L1MArticulo(models.Model):
    artcod = models.AutoField(db_column='ArtCod', primary_key=True)  # Field name made lowercase.
    artcodbar = models.IntegerField(db_column='ArtCodBar')  # Field name made lowercase.
    artnom = models.CharField(db_column='ArtNom', max_length=60)  # Field name made lowercase.
    artdsc = models.CharField(db_column='ArtDsc', max_length=250)  # Field name made lowercase.
    artpreuni = models.DecimalField(db_column='ArtPreUni', max_digits=6, decimal_places=2)  # Field name made lowercase.
    artstk = models.IntegerField(db_column='ArtStk')  # Field name made lowercase.
    artestregcod = models.ForeignKey(GzzEstadoRegistro, models.DO_NOTHING, db_column='ArtEstRegCod')  # Field name made lowercase.

    class Meta:
        db_table = 'l1m_articulo'
        unique_together = (('artcod', 'artcodbar'),)


class R1MTrabajador(models.Model):
    trbcod = models.AutoField(db_column='TrbCod', primary_key=True)  # Field name made lowercase.
    trbciacod = models.ForeignKey(F2MCompany, models.DO_NOTHING, db_column='TrbCiaCod')  # Field name made lowercase.
    trbnom = models.CharField(db_column='TrbNom', max_length=60)  # Field name made lowercase.
    trbcon = models.CharField(db_column='TrbCon', max_length=10)  # Field name made lowercase.
    trartt = models.ForeignKey(GzzSino, models.DO_NOTHING, db_column='TraRtt')  # Field name made lowercase.
    trbestreg = models.ForeignKey(GzzEstadoRegistro, models.DO_NOTHING, db_column='TrbEstReg')  # Field name made lowercase.

    class Meta:
        db_table = 'r1m_trabajador'
        unique_together = (('trbcod', 'trbciacod'),)


class V1TBoletaEleCab(models.Model):
    bolelecabcod = models.AutoField(db_column='BolEleCabCod', primary_key=True)  # Field name made lowercase.
    bolelecabfecdia = models.IntegerField(db_column='BolEleCabFecDia')  # Field name made lowercase.
    bolelecabfecmes = models.IntegerField(db_column='BolEleCabFecMes')  # Field name made lowercase.
    bolelecabfecaño = models.IntegerField(db_column='BolEleCabFecAño')  # Field name made lowercase.
    bolelecabhor = models.IntegerField(db_column='BolEleCabHor')  # Field name made lowercase.
    bolelecabmin = models.IntegerField(db_column='BolEleCabMin')  # Field name made lowercase.
    bolelecabseg = models.IntegerField(db_column='BolEleCabSeg')  # Field name made lowercase.
    bolelecabclicod = models.ForeignKey('V2MCliente', models.DO_NOTHING, db_column='BolEleCabCliCod')  # Field name made lowercase.
    bolelecabtrbcod = models.ForeignKey(R1MTrabajador, models.DO_NOTHING, db_column='BolEleCabTrbCod')  # Field name made lowercase.
    bolelecabtot = models.IntegerField(db_column='BolEleCabTot')  # Field name made lowercase.
    bolelecabestregcod = models.ForeignKey(GzzEstadoRegistro, models.DO_NOTHING, db_column='BolEleCabEstRegCod')  # Field name made lowercase.

    class Meta:
        db_table = 'v1t_boleta_ele_cab'


class V1TBoletaEleDetArt(models.Model):
    boleledetartbolelecabcod = models.OneToOneField(V1TBoletaEleCab, models.DO_NOTHING, db_column='BolEleDetArtBolEleCabCod', primary_key=True)  # Field name made lowercase.
    boleledetartartcod = models.ForeignKey(L1MArticulo, models.DO_NOTHING, db_column='BolEleDetArtArtCod')  # Field name made lowercase.
    boleledetartartcodbar = models.ForeignKey(L1MArticulo, models.DO_NOTHING, db_column='BolEleDetArtArtCodBar')  # Field name made lowercase.
    boleledetartartcan = models.IntegerField(db_column='BolEleDetArtArtCan')  # Field name made lowercase.
    boleledetartartimp = models.DecimalField(db_column='BolEleDetArtArtImp', max_digits=5, decimal_places=2)  # Field name made lowercase.
    boleledetartestreg = models.ForeignKey(GzzEstadoRegistro, models.DO_NOTHING, db_column='BolEleDetArtEstReg')  # Field name made lowercase.

    class Meta:
        db_table = 'v1t_boleta_ele_det_art'
        unique_together = (('boleledetartbolelecabcod', 'boleledetartartcod', 'boleledetartartcodbar'),)


class V1TBoletaEleDetTra(models.Model):
    boleledettrabolelecabcod = models.OneToOneField(V1TBoletaEleCab, models.DO_NOTHING, db_column='BolEleDetTraBolEleCabCod', primary_key=True)  # Field name made lowercase.
    boleledettratracod = models.ForeignKey('V1TTransaccion', models.DO_NOTHING, db_column='BolEleDetTraTraCod')  # Field name made lowercase.
    boleledettratracan = models.IntegerField(db_column='BolEleDetTraTraCan')  # Field name made lowercase.
    boleledettratraimp = models.DecimalField(db_column='BolEleDetTraTraImp', max_digits=5, decimal_places=2)  # Field name made lowercase.
    boleledettraestregcod = models.ForeignKey(GzzEstadoRegistro, models.DO_NOTHING, db_column='BolEleDetTraEstRegCod')  # Field name made lowercase.

    class Meta:
        db_table = 'v1t_boleta_ele_det_tra'
        unique_together = (('boleledettrabolelecabcod', 'boleledettratracod'),)


class V1TTransaccion(models.Model):
    tracod = models.AutoField(db_column='TraCod', primary_key=True)  # Field name made lowercase.
    tranom = models.CharField(db_column='TraNom', max_length=60)  # Field name made lowercase.
    tradsc = models.CharField(db_column='TraDsc', max_length=250)  # Field name made lowercase.
    trapre = models.DecimalField(db_column='TraPre', max_digits=5, decimal_places=2)  # Field name made lowercase.
    traestregcod = models.ForeignKey(GzzEstadoRegistro, models.DO_NOTHING, db_column='TraEstRegCod')  # Field name made lowercase.

    class Meta:
        db_table = 'v1t_transaccion'


class V2MCliente(models.Model):
    clicod = models.AutoField(db_column='CliCod', primary_key=True)  # Field name made lowercase.
    clinom = models.CharField(db_column='CliNom', max_length=60)  # Field name made lowercase.
    clidni = models.IntegerField(db_column='CliDNI', blank=True, null=True)  # Field name made lowercase.
    cliestregcod = models.ForeignKey(GzzEstadoRegistro, models.DO_NOTHING, db_column='CliEstRegCod')  # Field name made lowercase.

    class Meta:
        db_table = 'v2m_cliente'
