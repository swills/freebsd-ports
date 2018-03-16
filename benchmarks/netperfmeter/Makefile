# Created by: Thomas Dreibholz <dreibh@iem.uni-due.de>
# $FreeBSD: head/benchmarks/netperfmeter/Makefile 464174 2018-03-11 14:10:01Z tobik $

PORTNAME=	netperfmeter
PORTVERSION=	1.7.6
CATEGORIES=	benchmarks
MASTER_SITES=	https://www.uni-due.de/~be0001/netperfmeter/download/

MAINTAINER=	dreibh@iem.uni-due.de
COMMENT=	Network Performance Meter

LICENSE=	GPLv3+
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		cmake shebangfix
CMAKE_ON=	BUILD_PLOT_PROGRAMS
CMAKE_OFF=	BUILD_TEST_PROGRAMS WITH_NEAT
SHEBANG_FILES=	src/pdfembedfonts src/pdfmetadata src/plot-netperfmeter-results

post-patch:
	@${REINPLACE_CMD} 's,share/man,man,' ${WRKSRC}/CMakeLists.txt

.include <bsd.port.mk>
