# Created by: Mathieu Arnold <m@absolight.net>
# $FreeBSD: head/devel/p5-DateTime-Format-Builder/Makefile 494531 2019-03-04 00:28:29Z wen $

PORTNAME=	DateTime-Format-Builder
PORTVERSION=	0.82
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Create DateTime parser classes and objects

LICENSE=	ART20
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-DateTime>=0.12:devel/p5-DateTime \
		p5-DateTime-Format-Strptime>=1.04:devel/p5-DateTime-Format-Strptime \
		p5-Params-Validate>=0.72:devel/p5-Params-Validate \
		p5-Task-Weaken>=0:devel/p5-Task-Weaken
TEST_DEPENDS=	p5-Devel-Cycle>=1.07:devel/p5-Devel-Cycle \
		p5-Test-Memory-Cycle>=0:devel/p5-Test-Memory-Cycle

OPTIONS_DEFINE=	EXAMPLES

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

PORTEXAMPLES=	Apache.pm Fall.pm ICal.pm MySQL.pm Simple.pm Tivoli.pm W3CDTF.pm

post-install-EXAMPLES-on:
	@${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	(cd ${WRKSRC}/examples && ${INSTALL_DATA} ${PORTEXAMPLES} ${STAGEDIR}${EXAMPLESDIR})

.include <bsd.port.mk>
