# Created by: Koichiro IWAO <meta@FreeBSD.org>
# $FreeBSD: head/devel/rubygem-pluggaloid/Makefile 465067 2018-03-20 06:16:18Z meta $

PORTNAME=	pluggaloid
PORTVERSION=	1.1.1
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Extensible plugin system for mikutter

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	rubygem-delayer>=0:devel/rubygem-delayer \
		rubygem-instance_storage>=1.0.0:devel/rubygem-instance_storage

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
