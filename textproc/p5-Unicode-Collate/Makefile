# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/textproc/p5-Unicode-Collate/Makefile 489209 2019-01-03 19:57:32Z sunpoet $

PORTNAME=	Unicode-Collate
PORTVERSION=	1.27
CATEGORIES=	textproc converters perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Unicode Collation Algorithm

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

USES=		perl5
USE_PERL5=	configure

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Unicode/Collate/Collate.so

.include <bsd.port.mk>
