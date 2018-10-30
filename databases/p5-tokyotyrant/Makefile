# Created by: Hiroyuki Hanai <hanai@FreeBSD.org>
# $FreeBSD: head/databases/p5-tokyotyrant/Makefile 483424 2018-10-29 22:14:56Z sunpoet $

PORTNAME=	tokyotyrant
PORTVERSION=	1.16
PORTREVISION=	3
CATEGORIES=	databases perl5
MASTER_SITES=	https://fallabs.com/${PORTNAME}/perlpkg/
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-perl-${PORTVERSION}

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl5 interface to the TokyoTyrant

BUILD_DEPENDS=	tokyotyrant>=1.1.40:databases/tokyotyrant
LIB_DEPENDS=	libtokyotyrant.so:databases/tokyotyrant

USES=		perl5 shebangfix
SHEBANG_FILES=	tcrtest.pl ttutest.pl
USE_PERL5=	configure
NO_ARCH=	yes

.include <bsd.port.mk>
