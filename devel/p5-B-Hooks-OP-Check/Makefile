# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: head/devel/p5-B-Hooks-OP-Check/Makefile 464354 2018-03-13 09:03:12Z amdmi3 $

PORTNAME=	B-Hooks-OP-Check
PORTVERSION=	0.22
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Wrap OP check callbacks

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENCE

BUILD_DEPENDS=	p5-ExtUtils-Depends>=0.302:devel/p5-ExtUtils-Depends

USE_PERL5=	configure
USES=		perl5

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/B/Hooks/OP/Check/Check.so

.include <bsd.port.mk>
