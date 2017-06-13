# Created by: Cheng-Lung Sung <clsung@FreeBSD.org>
# $FreeBSD: head/misc/rubygem-mime-types/Makefile 416246 2016-06-01 15:28:42Z pi $

PORTNAME=	mime-types
PORTVERSION=	3.1
CATEGORIES=	misc rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby gem which provides a mailcap-like MIME Content-Type lookup

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/Licence.rdoc

RUN_DEPENDS=	rubygem-mime-types-data>=3.2015:misc/rubygem-mime-types-data

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
