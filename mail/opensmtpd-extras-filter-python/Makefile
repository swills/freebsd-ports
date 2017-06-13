# Created by: fluffy
# $FreeBSD: head/mail/opensmtpd-extras-filter-python/Makefile 434427 2017-02-20 02:57:04Z jbeich $

PKGNAMESUFFIX=		-filter-python
PORTREVISION=		2

COMMENT=		Python-script filter support for OpenSMTPD

PLIST_FILES=		libexec/opensmtpd/filter-python

CONFIGURE_ARGS+=	--with-experimental-filter-python --with-python-type=${PYTHON_VERSION}

USES=			python:2 pkgconfig

MASTERDIR=		${.CURDIR}/../opensmtpd-extras
SLAVE_PORT=		yes

.include "${MASTERDIR}/Makefile"
