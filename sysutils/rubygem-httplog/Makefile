# $FreeBSD: head/sysutils/rubygem-httplog/Makefile 463136 2018-02-27 13:25:10Z sunpoet $

PORTNAME=	httplog
PORTVERSION=	1.0.2
CATEGORIES=	sysutils rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Log outgoing HTTP requests

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

RUN_DEPENDS=	rubygem-colorize>=0.8:devel/rubygem-colorize \
		rubygem-rack>=1.0:www/rubygem-rack

NO_ARCH=	yes
USES=		gem
USE_RUBY=	yes

.include <bsd.port.mk>
