# Created by: fluffy
# $FreeBSD: head/mail/opensmtpd-extras-scheduler-python/Makefile 458745 2018-01-11 14:39:10Z fluffy $

PKGNAMESUFFIX=		-scheduler-python
PORTREVISION=		3

COMMENT=		Python scheduler support for OpenSMTPD

PLIST_FILES=		libexec/opensmtpd/scheduler-python

CONFIGURE_ARGS+=	--with-scheduler-python --with-python-type=${PYTHON_VERSION}

USES=			python:2.7 pkgconfig

MASTERDIR=		${.CURDIR}/../opensmtpd-extras
SLAVE_PORT=		yes

.include "${MASTERDIR}/Makefile"
