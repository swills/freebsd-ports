# Created by: andrew morton
# $FreeBSD$

PORTNAME=	cxxtest
PORTVERSION=	4.4
CATEGORIES=	devel
MASTER_SITES=	SF

MAINTAINER=	hselasky@freebsd.org
COMMENT=	Simple and powerful JUnit/CppUnit/xUnit-like framework for C++

WRKSRC=		${WRKDIR}/${DISTNAME}/python

USES=		gmake python:3.6+,run shebangfix
USE_PYTHON=	autoplist distutils
NO_ARCH=        yes

PLIST_FILES+= \
include/cxxtest/Descriptions.cpp \
include/cxxtest/Descriptions.h \
include/cxxtest/DummyDescriptions.cpp \
include/cxxtest/DummyDescriptions.h \
include/cxxtest/ErrorFormatter.h \
include/cxxtest/ErrorPrinter.h \
include/cxxtest/Flags.h \
include/cxxtest/GlobalFixture.cpp \
include/cxxtest/GlobalFixture.h \
include/cxxtest/Gui.h \
include/cxxtest/LinkedList.cpp \
include/cxxtest/LinkedList.h \
include/cxxtest/MSVCErrorPrinter.h \
include/cxxtest/Mock.h \
include/cxxtest/ParenPrinter.h \
include/cxxtest/QtGui.h \
include/cxxtest/RealDescriptions.cpp \
include/cxxtest/RealDescriptions.h \
include/cxxtest/Root.cpp \
include/cxxtest/SelfTest.h \
include/cxxtest/StdHeaders.h \
include/cxxtest/StdTestSuite.h \
include/cxxtest/StdValueTraits.h \
include/cxxtest/StdioFilePrinter.h \
include/cxxtest/StdioPrinter.h \
include/cxxtest/TeeListener.h \
include/cxxtest/TestListener.h \
include/cxxtest/TestMain.h \
include/cxxtest/TestRunner.h \
include/cxxtest/TestSuite.cpp \
include/cxxtest/TestSuite.h \
include/cxxtest/TestTracker.cpp \
include/cxxtest/TestTracker.h \
include/cxxtest/ValueTraits.cpp \
include/cxxtest/ValueTraits.h \
include/cxxtest/Win32Gui.h \
include/cxxtest/X11Gui.h \
include/cxxtest/XUnitPrinter.h \
include/cxxtest/XmlFormatter.h \
include/cxxtest/XmlPrinter.h \
include/cxxtest/YesNoRunner.h \
include/cxxtest/unix.h

post-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/include/cxxtest
	${INSTALL_DATA} ${WRKDIR}/${DISTNAME}/cxxtest/* ${STAGEDIR}${PREFIX}/include/cxxtest/

.include <bsd.port.mk>
