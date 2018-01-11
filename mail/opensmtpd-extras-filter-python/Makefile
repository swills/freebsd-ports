# Created by: fluffy
# $FreeBSD: head/mail/opensmtpd-extras-filter-python/Makefile 458745 2018-01-11 14:39:10Z fluffy $

PKGNAMESUFFIX=		-filter-python
PORTREVISION=		3

COMMENT=		Python-script filter support for OpenSMTPD

PLIST_FILES=		libexec/opensmtpd/filter-python

CONFIGURE_ARGS+=	--with-experimental-filter-python --with-python-type=${PYTHON_VERSION}

USES=			python:2.7 pkgconfig

MASTERDIR=		${.CURDIR}/../opensmtpd-extras
SLAVE_PORT=		yes

.include "${MASTERDIR}/Makefile"
