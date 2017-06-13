# Created by: Jonathan Weiss (<jw@innerewut.de>)
# $FreeBSD: head/devel/rubygem-rake/Makefile 439641 2017-04-28 20:25:38Z sunpoet $

PORTNAME=	rake
PORTVERSION=	12.0.0
PORTREVISION=	1
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
