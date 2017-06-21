# $FreeBSD: head/sysutils/rubygem-httplog/Makefile 443626 2017-06-15 19:34:46Z jrm $

PORTNAME=	httplog
PORTVERSION=	0.99.4
CATEGORIES=	sysutils rubygems
MASTER_SITES=	RG

MAINTAINER=	jrm@FreeBSD.org
COMMENT=	Log outgoing HTTP requests

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

RUN_DEPENDS=	rubygem-colorize>=0:devel/rubygem-colorize \
		rubygem-rake>=0:devel/rubygem-rake

NO_ARCH=	yes

USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
