# Created by: Jan-Peter Koopmann <Jan-Peter.Koopmann@seceidos.de>
# $FreeBSD: head/security/p5-File-Scan-ClamAV/Makefile 435101 2017-02-28 22:51:03Z sunpoet $

PORTNAME=	File-Scan-ClamAV
PORTVERSION=	1.95
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension for the clamav virus scanner

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	clamscan:security/clamav
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
