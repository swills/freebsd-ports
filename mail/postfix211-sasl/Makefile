# $FreeBSD: head/mail/postfix211-sasl/Makefile 409729 2016-02-28 09:01:45Z ohauer $

PKGNAMESUFFIX?=	211-sasl

MAINTAINER=	ohauer@FreeBSD.org
COMMENT=	Postfix with Cyrus SASL support

MASTERDIR=	${.CURDIR}/../postfix211

OPTIONS_SLAVE=	SASL

SASL_SLAVE=	yes

.include "${MASTERDIR}/Makefile"
