# Created by: gahr
# $FreeBSD: head/mail/opensmtpd-extras-table-python/Makefile 458745 2018-01-11 14:39:10Z fluffy $

PKGNAMESUFFIX=	-table-python
PORTREVISION=	3

COMMENT=	Python table support for OpenSMTPD

PLIST_FILES=	libexec/opensmtpd/table-python

CONFIGURE_ARGS+=	--with-table-python --with-python-type=${PYTHON_VERSION}

USES=		python:2.7 pkgconfig

MASTERDIR=	${.CURDIR}/../opensmtpd-extras
SLAVE_PORT=	yes

.include "${MASTERDIR}/Makefile"
