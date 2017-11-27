# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/textproc/p5-Unicode-Collate/Makefile 454926 2017-11-26 23:19:30Z sunpoet $

PORTNAME=	Unicode-Collate
PORTVERSION=	1.25
CATEGORIES=	textproc converters perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Unicode Collation Algorithm

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

USE_PERL5=	configure
USES=		perl5

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Unicode/Collate/Collate.so

.include <bsd.port.mk>
