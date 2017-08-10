# Created by: Steve Wills <swills@FreeBSD.org>
# $FreeBSD: head/dns/rubygem-public_suffix/Makefile 447424 2017-08-05 23:11:28Z sunpoet $

PORTNAME=	public_suffix
PORTVERSION=	3.0.0
CATEGORIES=	dns rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby domain name parser based on the Public Suffix List

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

PATCH_DEPENDS=	public_suffix_list>=0:dns/public_suffix_list

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

post-patch:
	@${CP} ${LOCALBASE}/share/public_suffix_list/public_suffix_list.dat ${WRKSRC}/data/definitions.txt

.include <bsd.port.mk>
