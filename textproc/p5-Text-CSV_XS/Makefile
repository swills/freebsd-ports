# Created by: Ache
# $FreeBSD: head/textproc/p5-Text-CSV_XS/Makefile 457774 2018-01-01 13:14:25Z wen $

PORTNAME=	Text-CSV_XS
PORTVERSION=	1.34
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:HMBRAND
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Comma-separated values manipulation routines

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/README

TEST_DEPENDS=	p5-Test-Pod>=1.51:devel/p5-Test-Pod \
		p5-Test-Pod-Coverage>=1.10:devel/p5-Test-Pod-Coverage \

USES=		perl5 tar:tgz
USE_PERL5=	configure

post-install:
		${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Text/CSV_XS/CSV_XS.so

.include <bsd.port.mk>
