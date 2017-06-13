# Created by: fluffy
# $FreeBSD: head/mail/opensmtpd-extras-queue-python/Makefile 434427 2017-02-20 02:57:04Z jbeich $

PKGNAMESUFFIX=		-queue-python
PORTREVISION=		2

COMMENT=		Python queue support for OpenSMTPD

PLIST_FILES=		libexec/opensmtpd/queue-python

CONFIGURE_ARGS+=	--with-queue-python --with-python-type=${PYTHON_VERSION}

USES=			python:2 pkgconfig

MASTERDIR=		${.CURDIR}/../opensmtpd-extras
SLAVE_PORT=		yes

.include "${MASTERDIR}/Makefile"
