# Created by: Jyun-Yan You <jyyou@cs.nctu.edu.tw>
# $FreeBSD: head/www/rubygem-innate/Makefile 427870 2016-12-05 07:20:50Z sunpoet $

PORTNAME=	innate
PORTVERSION=	2015.10.28
CATEGORIES=	www rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Powerful web-framework wrapper for Rack

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYING

RUN_DEPENDS=	rubygem-rack16>=1.6.4:www/rubygem-rack16

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem shebangfix

SHEBANG_FILES=	.load_gemset

.include <bsd.port.mk>
