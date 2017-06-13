# Created by: Steve Wills <swills@FreeBSD.org>
# $FreeBSD: head/textproc/rubygem-sass/Makefile 441240 2017-05-19 15:36:08Z sunpoet $

PORTNAME=	sass
PORTVERSION=	3.4.24
CATEGORIES=	textproc ruby
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Sass is an extension of CSS3

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem shebangfix
SHEBANG_FILES=	extra/sass-spec-ref.sh

PLIST_FILES=	bin/sass bin/sass-convert bin/scss

.include <bsd.port.mk>
