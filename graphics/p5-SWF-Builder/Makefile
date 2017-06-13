# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: head/graphics/p5-SWF-Builder/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	SWF-Builder
PORTVERSION=	0.16
PORTREVISION=	2
CATEGORIES=	graphics www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Create SWF movie

BUILD_DEPENDS=	p5-SWF-File>=0:graphics/p5-SWF-File \
		p5-Math-Bezier-Convert>=0:math/p5-Math-Bezier-Convert \
		p5-Font-TTF>=0:x11-fonts/p5-Font-TTF
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		dos2unix perl5 shebangfix
SHEBANG_FILES=	lib/SWF/Builder/ActionScript/Compiler.pm
USE_PERL5=	configure
NO_ARCH=	yes

post-configure:
	@${PERL} -pi -e 's/^(POD2MAN_EXE.*)$$/\1 --lax/;' ${WRKSRC}/Makefile

.include <bsd.port.mk>
