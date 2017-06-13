# $FreeBSD: head/mail/postfix-sasl/Makefile 409557 2016-02-25 20:33:43Z ohauer $

PKGNAMESUFFIX?=	-sasl

MAINTAINER=	ohauer@FreeBSD.org
COMMENT=	Postfix with Cyrus SASL support

MASTERDIR=	${.CURDIR}/../postfix

OPTIONS_SLAVE=	SASL

SASL_SLAVE=	yes

.include "${MASTERDIR}/Makefile"
