# Created by: Lars Eggert <lars.eggert@gmx.net>
# $FreeBSD: head/multimedia/p5-MP4-Info/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	MP4-Info
PORTVERSION=	1.13
PORTREVISION=	2
CATEGORIES=	multimedia perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Fetch info from MPEG-4 files

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-IO-String>=0:devel/p5-IO-String

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
