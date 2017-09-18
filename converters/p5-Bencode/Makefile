# Created by: Mark Felder <feld@FreeBSD.org>
# $FreeBSD: head/converters/p5-Bencode/Makefile 449893 2017-09-15 08:58:46Z mat $

PORTNAME=	Bencode
PORTVERSION=	1.402
PORTREVISION=	1
CATEGORIES=	converters perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:ARISTOTLE
PKGNAMEPREFIX=	p5-

MAINTAINER=	feld@FreeBSD.org
COMMENT=	BitTorrent bencode serialisation format

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Exporter-Tidy>0:devel/p5-Exporter-Tidy
RUN_DEPENDS=	p5-Exporter-Tidy>0:devel/p5-Exporter-Tidy

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
