# $FreeBSD: head/mail/postfix-current-sasl/Makefile 409557 2016-02-25 20:33:43Z ohauer $

PKGNAMESUFFIX?=	-current-sasl

MAINTAINER=	ohauer@FreeBSD.org
COMMENT=	Postfix with Cyrus SASL support

MASTERDIR=	${.CURDIR}/../postfix-current

OPTIONS_SLAVE=	SASL

SASL_SLAVE=	yes

.include "${MASTERDIR}/Makefile"
