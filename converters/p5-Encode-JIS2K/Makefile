# Created by: Rong-En Fan <rafan@infor.org>
# $FreeBSD: head/converters/p5-Encode-JIS2K/Makefile 449893 2017-09-15 08:58:46Z mat $

PORTNAME=	Encode-JIS2K
PORTVERSION=	0.03
CATEGORIES=	converters perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	JIS X 0212 (aka JIS 2000) Encodings

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

USES=		perl5
USE_PERL5=	configure

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Encode/JIS2K/JIS2K.so

.include <bsd.port.mk>
