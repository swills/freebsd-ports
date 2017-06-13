# Created by: fluffy
# $FreeBSD: head/mail/opensmtpd-extras-scheduler-python/Makefile 434427 2017-02-20 02:57:04Z jbeich $

PKGNAMESUFFIX=		-scheduler-python
PORTREVISION=		2

COMMENT=		Python scheduler support for OpenSMTPD

PLIST_FILES=		libexec/opensmtpd/scheduler-python

CONFIGURE_ARGS+=	--with-scheduler-python --with-python-type=${PYTHON_VERSION}

USES=			python:2 pkgconfig

MASTERDIR=		${.CURDIR}/../opensmtpd-extras
SLAVE_PORT=		yes

.include "${MASTERDIR}/Makefile"
