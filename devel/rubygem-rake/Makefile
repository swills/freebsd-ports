# Created by: Jonathan Weiss (<jw@innerewut.de>)
# $FreeBSD: head/devel/rubygem-rake/Makefile 487113 2018-12-09 23:56:30Z sunpoet $

PORTNAME=	rake
PORTVERSION=	12.3.2
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby Make

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

USES=		gem shebangfix
USE_RUBY=	yes

NO_ARCH=	yes

PLIST_FILES=	bin/rake

SHEBANG_FILES=	bin/console exe/rake

.include <bsd.port.mk>
