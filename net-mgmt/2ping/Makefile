# $FreeBSD: head/net-mgmt/2ping/Makefile 445586 2017-07-12 15:00:20Z amdmi3 $

PORTNAME=	2ping
PORTVERSION=	3.2.1
CATEGORIES=	net-mgmt perl5
MASTER_SITES=	http://www.finnie.org/software/2ping/ \
		LOCAL/sunpoet

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Bi-directional ping utility

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

NO_ARCH=	yes
USE_PYTHON=	autoplist concurrent distutils
USES=		python

.include <bsd.port.mk>
