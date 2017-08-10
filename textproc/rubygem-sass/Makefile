# Created by: Steve Wills <swills@FreeBSD.org>
# $FreeBSD: head/textproc/rubygem-sass/Makefile 447387 2017-08-05 03:33:30Z jrm $

PORTNAME=	sass
PORTVERSION=	3.5.1
CATEGORIES=	textproc ruby
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Sass is an extension of CSS3

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

RUN_DEPENDS=	rubygem-sass-listen>=4.0.0:textproc/rubygem-sass-listen

NO_ARCH=	yes
USES=		gem shebangfix
USE_RUBY=	yes
SHEBANG_FILES=	extra/sass-spec-ref.sh

PLIST_FILES=	bin/sass bin/sass-convert bin/scss

.include <bsd.port.mk>
