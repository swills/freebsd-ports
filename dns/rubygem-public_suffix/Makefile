# Created by: Steve Wills <swills@FreeBSD.org>
# $FreeBSD: head/dns/rubygem-public_suffix/Makefile 495474 2019-03-12 18:09:10Z sunpoet $

PORTNAME=	public_suffix
PORTVERSION=	3.0.3
PORTREVISION=	5
CATEGORIES=	dns rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Ruby domain name parser based on the Public Suffix List

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

PATCH_DEPENDS=	public_suffix_list>=0:dns/public_suffix_list

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

post-patch:
	@${CP} ${LOCALBASE}/share/public_suffix_list/public_suffix_list.dat ${WRKSRC}/data/definitions.txt

.include <bsd.port.mk>
