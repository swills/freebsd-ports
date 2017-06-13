# $FreeBSD: head/devel/gitinspector/Makefile 442073 2017-05-30 15:21:24Z sunpoet $

PORTNAME=	gitinspector
PORTVERSION=	0.4.4
DISTVERSIONPREFIX=	v
PORTREVISION=	1
CATEGORIES=	devel python

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Statistical analysis tool for git repositories

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	git:devel/git

NO_ARCH=	yes
USE_PYTHON=	autoplist distutils
USES=		python

GH_ACCOUNT=	ejwa
USE_GITHUB=	yes

.include <bsd.port.mk>
