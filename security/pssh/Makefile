# $FreeBSD: head/security/pssh/Makefile 425419 2016-11-05 18:01:32Z sunpoet $

PORTNAME=	pssh
PORTVERSION=	2.3.1
CATEGORIES=	security net sysutils
MASTER_SITES=	CHEESESHOP

MAINTAINER=	brooks@FreeBSD.org
COMMENT=	Parallel versions of the openssh tools

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/COPYING

RUN_DEPENDS=	rsync:net/rsync

NO_ARCH=	yes
USES=		python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
