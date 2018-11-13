# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: head/www/rubygem-httparty/Makefile 484839 2018-11-12 21:29:15Z sunpoet $

PORTNAME=	httparty
PORTVERSION=	0.16.3
CATEGORIES=	www rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby Library that Makes HTTP Fun Again

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

RUN_DEPENDS=	rubygem-mime-types>=3.0:misc/rubygem-mime-types \
		rubygem-multi_xml>=0.5.2:textproc/rubygem-multi_xml

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

PLIST_FILES=	bin/httparty

.include <bsd.port.mk>
