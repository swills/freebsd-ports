# $FreeBSD: head/www/rubygem-bootstrap-sass/Makefile 427713 2016-12-03 19:35:01Z sunpoet $

PORTNAME=	bootstrap-sass
PORTVERSION=	3.3.7
CATEGORIES=	www rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Bootstrap by Twitter

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-autoprefixer-rails>=5.2.1:textproc/rubygem-autoprefixer-rails \
		rubygem-sass>=3.3.4:textproc/rubygem-sass

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
