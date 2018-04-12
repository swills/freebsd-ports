# $FreeBSD: head/net-im/py-nbxmpp/Makefile 467112 2018-04-11 21:05:32Z rm $

PORTNAME=	nbxmpp
PORTVERSION=	0.6.4
CATEGORIES=	net-im devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	rm@FreeBSD.org
COMMENT=	Non-blocking Jabber/XMPP module

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}openssl>0:security/py-openssl@${FLAVOR}

NO_ARCH=	yes
USES=		python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
