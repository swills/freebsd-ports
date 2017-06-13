# $FreeBSD: head/mail/py-notmuch/Makefile 426152 2016-11-15 09:14:11Z wen $

PORTNAME=	notmuch
PORTVERSION=	0.23.1
CATEGORIES=	mail python
MASTER_SITES=	http://notmuchmail.org/releases/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	geier@lostpackets.de
COMMENT=	Python binding of the notmuch mail search and indexing library

LICENSE=	GPLv3+
LICENSE_FILE=	${WRKSRC}/../../COPYING-GPL-3

LIB_DEPENDS=	libnotmuch.so:mail/notmuch

WRKSRC_SUBDIR=	bindings/python

USES=		python
USE_PYTHON=	autoplist distutils
NO_ARCH=	yes

MAKE_ENV+=	PYTHONCMD=${PYTHON_CMD}

.include <bsd.port.mk>
