# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: head/databases/p5-POE-Component-RRDTool/Makefile 471578 2018-06-04 18:01:46Z sunpoet $

PORTNAME=	POE-Component-RRDTool
PORTVERSION=	0.18
PORTREVISION=	6
CATEGORIES=	databases perl5 devel
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:TCAINE
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	POE interface to Round Robin Database Tools

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	rrdtool:databases/rrdtool \
		p5-POE>=0:devel/p5-POE
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure
CONFIGURE_ARGS=	</dev/null

post-patch:
	@${REINPLACE_CMD} -e 's|($$maj, $$min, $$sub)|&; &|' ${WRKSRC}/Makefile.PL

.include <bsd.port.mk>
