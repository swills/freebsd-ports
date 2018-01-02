# Created by: Scott Cheloha <scottcheloha@gmail.com>
# $FreeBSD: head/biology/bedtools/Makefile 456976 2017-12-22 12:27:14Z amdmi3 $

PORTNAME=	bedtools
PORTVERSION=	2.25.0
DISTVERSIONPREFIX=	v
CATEGORIES=	biology
MASTER_SITES=	GITHUB

MAINTAINER=	scottcheloha@gmail.com
COMMENT=	Toolset for genome arithmetic

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/LICENSE

USE_GITHUB=	yes
GH_ACCOUNT=	arq5x
GH_PROJECT=	bedtools2

USES=		gmake python
#NO_ARCH=	yes

MAKE_JOBS_UNSAFE=	yes

post-patch:
	@${REINPLACE_CMD} -e 's|python|${PYTHON_CMD}|g' \
		${WRKSRC}/Makefile

.include <bsd.port.mk>
