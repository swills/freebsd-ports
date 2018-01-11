# Created by: fluffy
# $FreeBSD: head/mail/opensmtpd-extras-queue-python/Makefile 458745 2018-01-11 14:39:10Z fluffy $

PKGNAMESUFFIX=		-queue-python
PORTREVISION=		3

COMMENT=		Python queue support for OpenSMTPD

PLIST_FILES=		libexec/opensmtpd/queue-python

CONFIGURE_ARGS+=	--with-queue-python --with-python-type=${PYTHON_VERSION}

USES=			python:2.7 pkgconfig

MASTERDIR=		${.CURDIR}/../opensmtpd-extras
SLAVE_PORT=		yes

.include "${MASTERDIR}/Makefile"
