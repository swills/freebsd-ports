# Created by: Nikola Kolev <koue@chaosophia.net>
# $FreeBSD: head/security/samhain-server/Makefile 435996 2017-03-12 17:07:23Z lifanov $

# This port recognizes the following non-boolean tunables:
#
# WITH_RUNAS_USER:
#       Whe building with "WITH_SERVER" defined, the username of the
#       account Yule will run as. Defaults to "yule". If using
#       WITH_GNUPG, ensure that this user exists and has a pgp
#       keypair before installing.

PKGNAMESUFFIX=	-server

COMMENT=	Log server for the Samhain IDS

WITH_SERVER=	yes

MASTERDIR=	${.CURDIR}/../samhain

.include "${MASTERDIR}/Makefile"
