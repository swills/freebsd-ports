# Created by: Markus Brueffer <brueffer@phoenix-systems.de>
# $FreeBSD: head/print/kover/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	kover
PORTVERSION=	6
PORTREVISION=	9
CATEGORIES=	print kde
MASTER_SITES=	https://lisas.de/kover/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	WYSIWYG CD cover printer

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libcddb.so:audio/libcddb \
		libcdio.so:sysutils/libcdio

USES=		cmake gettext kde:4 perl5 pkgconfig qt:4 shared-mime-info tar:bzip2
USE_KDE=	automoc4 kdelibs
USE_QT=		corelib dbus gui network svg xml \
		qmake_build uic_build rcc_build
USE_PERL5=	build

post-patch:
	@${REINPLACE_CMD} -e \
		'/libcdio/s|>=.*)|)|' ${WRKSRC}/src/CMakeLists.txt

.include <bsd.port.mk>
