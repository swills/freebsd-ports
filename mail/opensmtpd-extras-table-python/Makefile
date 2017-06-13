# Created by: gahr
# $FreeBSD: head/mail/opensmtpd-extras-table-python/Makefile 434427 2017-02-20 02:57:04Z jbeich $

PKGNAMESUFFIX=	-table-python
PORTREVISION=	2

COMMENT=	Python table support for OpenSMTPD

PLIST_FILES=	libexec/opensmtpd/table-python

CONFIGURE_ARGS+=	--with-table-python --with-python-type=${PYTHON_VERSION}

USES=		python:2 pkgconfig

MASTERDIR=	${.CURDIR}/../opensmtpd-extras
SLAVE_PORT=	yes

.include "${MASTERDIR}/Makefile"
