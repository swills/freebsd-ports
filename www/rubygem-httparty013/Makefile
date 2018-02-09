# $FreeBSD$

PORTNAME=	httparty
PORTVERSION=	0.13.7
CATEGORIES=	www rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	013

MAINTAINER=	idefix@fechner.net
COMMENT=	Ruby Library that Makes HTTP Fun Again

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

RUN_DEPENDS=	rubygem-multi_xml>=0.5.2:textproc/rubygem-multi_xml \
		rubygem-json1>=1.8:devel/rubygem-json1

CONFLICTS_INSTALL=	rubygem-httparty
PORTSCOUT=	limit:^0\.13

NO_ARCH=	yes
USES=		gem
USE_RUBY=	yes

PLIST_FILES=	bin/httparty

.include <bsd.port.mk>
