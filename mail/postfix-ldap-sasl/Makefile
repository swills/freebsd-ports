# $FreeBSD: head/mail/postfix-ldap-sasl/Makefile 479288 2018-09-09 13:12:57Z ohauer $

PKGNAMESUFFIX?=	-ldap-sasl

MAINTAINER=	ohauer@FreeBSD.org
COMMENT=	Postfix with OpenLDAP and Cyrus SASL support

MASTERDIR=	${.CURDIR}/../postfix

OPTIONS_SLAVE=	LDAP LDAP_SASL SASL

SASL_SLAVE=	yes

.include "${MASTERDIR}/Makefile"
