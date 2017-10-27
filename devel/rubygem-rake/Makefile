# Created by: Jonathan Weiss (<jw@innerewut.de>)
# $FreeBSD: head/devel/rubygem-rake/Makefile 452885 2017-10-25 18:29:34Z sunpoet $

PORTNAME=	rake
PORTVERSION=	12.2.1
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby Make

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem shebangfix

PLIST_FILES=	bin/rake

SHEBANG_FILES=	bin/console exe/rake

.include <bsd.port.mk>
